/*
 * stub.h
 *
 *  Created on: 21.04.2013
 *      Author: scn
 */

#ifndef STUBBER_H_
#define STUBBER_H_

// project includes

// system includes
#include <utility>
#include <tuple>
#include <list>
#include <map>
#include <initializer_list>
#include <boost/any.hpp>

class stubber {
public:
  class function_call {
  public:
    class argument {
    public:
      argument() : m_value(nullptr) {}
      template <typename T>
      argument (T const & value) : m_value(value) {}
      ~argument () = default;
      argument (argument const &  right) = default;
      argument (argument&& right) {
        m_value = std::move(right.m_value);
      }

      argument & operator = (argument const & right) {
        m_value = right.m_value;
        return *this;
      }

      template <class T>
      friend inline bool operator == (argument const & left, T const & right) {
        return boost::any_cast<T>(left.m_value) == right;
      }

/*
      template <class T, std::enable_if<std::is_same<T, argument>::value, argument>::type = 0>
      friend inline bool operator == (T const & left, argument const & right) {
        return boost::any_cast<T>(right.m_value) == left;
      }

      friend inline bool operator == (argument const & left, argument const & right) {
        return false;
      }
*/

      template <typename T, typename S>
      friend inline bool operator != (T const & left, S const & right) {
        return !(left == right);
      }

    private:
      boost::any m_value;
    };
    typedef std::map<std::string, argument> t_argument_map;
    typedef std::pair<std::string, argument> t_name_argument;
//    typedef std::tuple<std::string, argument> t_name_argument;


    function_call (std::string const & name, std::initializer_list<t_name_argument> const & arguments) : m_name(name), m_arguments(t_argument_map()) {
      for (auto const & item : arguments) {
//        m_arguments[std::get<0>(item)] = std::get<1>(item);
        m_arguments.insert(item);
//        m_arguments[item.first] = item.second;
      }
    }
    ~function_call () = default;
    function_call (function_call&)  = default;
    function_call (function_call&& right) {
      m_name = std::move(right.m_name);
      m_arguments = std::move(right.m_arguments);
    };

    function_call& operator = (function_call& right) {
      m_name      = right.m_name;
      m_arguments = right.m_arguments;

      return *this;
    }

    std::string const & name () const { return m_name; }
    t_argument_map & arguments () { return m_arguments; }

    argument const & operator () (std::string const & name) { return m_arguments[name]; }

/*
    friend inline bool operator == (function_call const & left, function_call const & right) {
      bool result = left.m_name == right.m_name;

      // compare forward
      if (result)
        for (auto const & item : left.m_arguments)
          result = (result && right.m_arguments[item.first] == item.second);

      if (result)
        for (auto const & item : right.m_arguments)
          result = (result && left.m_arguments[item.first] == item.second);

      return result;
    }
*/

  private:
    std::string m_name;
    t_argument_map m_arguments;
  };
  typedef std::list<function_call> t_function_call_list;

  stubber (stubber&) = delete;
  stubber (stubber&&) = delete;

  static stubber & get_stub() { return s_stub; }

  static void reset() { s_stub.m_function_calls.clear(); }
  static void register_call(std::string const & name, std::initializer_list<function_call::t_name_argument> const & arguments) {
    s_stub.m_function_calls.push_back(function_call(name, arguments));
  }

  t_function_call_list const & function_calls() const { return m_function_calls; }

private:
  static stubber s_stub;

  stubber () = default;
  ~stubber () = default;

  t_function_call_list m_function_calls;
};

struct fixture {
  fixture() : stub(stubber::get_stub()) {}
  ~fixture() {
    stubber::reset();
  }

  stubber& stub;
};

#endif /* STUBBER_H_ */
