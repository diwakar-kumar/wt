/*
 * Copyright (C) 2011 Emweb bvba, Kessel-Lo, Belgium.
 *
 * See the LICENSE file for terms of use.
 */

#include "PasswordHash"

namespace Wt {
  namespace Auth {

PasswordHash::PasswordHash()
{ }

PasswordHash::PasswordHash(const std::string& function,
			   const std::string& salt,
			   const std::string& value)
  : function_(function),
    salt_(salt),
    value_(value)
{ }

  }
}
