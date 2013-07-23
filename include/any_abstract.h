/*
 * any_abstract.h
 *
 *  Created on: 23.07.2013
 *      Author: scn
 */

#ifndef ANY_ABSTRACT_H_
#define ANY_ABSTRACT_H_

class any_abstract {
  public:

  any_abstract() {}
  virtual ~any_abstract() {}

  virtual void* get_value() = 0;
//  virtual void const * get_value() = 0;
};

#endif /* ANY_ABSTRACT_H_ */

