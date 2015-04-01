/**
 * Ultimate-Formatter is licensed under the GNU GPL v2.
 * Please see the LICENSE file for more information.
 *
 * (c) Christiaan de Die <contact@techwolf12.nl>
 * (c) Angelo Geels <spansjh@gmail.com>
 */

#ifndef UFMT_FORMATTER_H_INCLUDED
#define UFMT_FORMATTER_H_INCLUDED

#include "StdH.h"

UFMT_NS_BEGIN;

/**
 * Base formatter class. Inherit from this class to define a new language formatter.
 */
class CFormatter
{
public:
  /**
   * The input stream to read from to start processing.
   */
  CFileStream* fmt_pfsInput;

public:
  CFormatter();
  virtual ~CFormatter();

  /**
   * When the formatter starts, this will be the "entry point", a good place to clean
   * class fields and start from an empty state.
   */
  virtual void Start() = 0;

  /**
   * This is called to actually process the input stream and write to the given output
   * stream.
   */
  virtual void Process(CFileStream &fsOutput) = 0;
};

UFMT_NS_END;

#endif
