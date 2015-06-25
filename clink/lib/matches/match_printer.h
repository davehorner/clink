/* Copyright (c) 2012 Martin Ridgers
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef MATCH_PRINTER_H
#define MATCH_PRINTER_H

class terminal;
class matches;

//------------------------------------------------------------------------------
class match_printer
{
public:
                    match_printer(terminal* terminal);
    virtual         ~match_printer() = 0 {}
    virtual void    print(const matches& matches) = 0;

private:
    terminal*       get_terminal() const;
    terminal*       m_terminal;
};

//------------------------------------------------------------------------------
inline match_printer::match_printer(terminal* terminal)
: m_terminal(terminal)
{
}

//------------------------------------------------------------------------------
inline terminal* match_printer::get_terminal() const
{
    return m_terminal;
}

#endif // MATCH_PRINTER_H