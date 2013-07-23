/*
 * any.h
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#ifndef ANY_H_
#define ANY_H_

#include "any_abstract.h"

template <class T>
class any : public any_abstract {
  public:

  any(T const & value) : m_value(value) {}
  ~any() {}

  void* get_value() { return reinterpret_cast<void*>(&m_value); }
//  void const* get_value() { return reinterpret_cast<void*>(&m_value); }

  protected:

  T m_value;
};

#endif /* ANY_H_ */

