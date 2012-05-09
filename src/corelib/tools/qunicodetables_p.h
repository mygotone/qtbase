/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the QtCore module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

/* This file is autogenerated from the Unicode 5.0 database. Do not edit */

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of internal files.  This header file may change from version to version
// without notice, or even be removed.
//
// We mean it.
//

#ifndef QUNICODETABLES_P_H
#define QUNICODETABLES_P_H

#include <QtCore/qchar.h>

QT_BEGIN_NAMESPACE

#define UNICODE_DATA_VERSION QChar::Unicode_5_0

#define UNICODE_LAST_CODEPOINT 0x10ffff

namespace QUnicodeTables {

    struct Properties {
        ushort category         : 8; /* 5 needed */
        ushort line_break_class : 8; /* 6 needed */
        ushort direction        : 8; /* 5 needed */
        ushort combiningClass   : 8;
        ushort joining          : 2;
        signed short digitValue : 6; /* 5 needed */
        ushort unicodeVersion   : 4;
        ushort lowerCaseSpecial : 1;
        ushort upperCaseSpecial : 1;
        ushort titleCaseSpecial : 1;
        ushort caseFoldSpecial  : 1;
        signed short mirrorDiff    : 16;
        signed short lowerCaseDiff : 16;
        signed short upperCaseDiff : 16;
        signed short titleCaseDiff : 16;
        signed short caseFoldDiff  : 16;
        ushort graphemeBreak    : 8; /* 4 needed */
        ushort wordBreak        : 8; /* 4 needed */
        ushort sentenceBreak    : 8; /* 4 needed */
    };
    Q_CORE_EXPORT const Properties * QT_FASTCALL properties(uint ucs4);
    Q_CORE_EXPORT const Properties * QT_FASTCALL properties(ushort ucs2);

    // See http://www.unicode.org/reports/tr24/tr24-5.html
    enum Script {
        Common,
        Greek,
        Cyrillic,
        Armenian,
        Hebrew,
        Arabic,
        Syriac,
        Thaana,
        Devanagari,
        Bengali,
        Gurmukhi,
        Gujarati,
        Oriya,
        Tamil,
        Telugu,
        Kannada,
        Malayalam,
        Sinhala,
        Thai,
        Lao,
        Tibetan,
        Myanmar,
        Georgian,
        Hangul,
        Ogham,
        Runic,
        Khmer,
        Nko,
        Inherited,
        ScriptCount = Inherited,
        Latin = Common,
        Ethiopic = Common,
        Cherokee = Common,
        CanadianAboriginal = Common,
        Mongolian = Common,
        Hiragana = Common,
        Katakana = Common,
        Bopomofo = Common,
        Han = Common,
        Yi = Common,
        OldItalic = Common,
        Gothic = Common,
        Deseret = Common,
        Tagalog = Common,
        Hanunoo = Common,
        Buhid = Common,
        Tagbanwa = Common,
        Limbu = Common,
        TaiLe = Common,
        LinearB = Common,
        Ugaritic = Common,
        Shavian = Common,
        Osmanya = Common,
        Cypriot = Common,
        Braille = Common,
        Buginese = Common,
        Coptic = Common,
        NewTaiLue = Common,
        Glagolitic = Common,
        Tifinagh = Common,
        SylotiNagri = Common,
        OldPersian = Common,
        Kharoshthi = Common,
        Balinese = Common,
        Cuneiform = Common,
        Phoenician = Common,
        PhagsPa = Common
    };
    enum { ScriptSentinel = 32 };


    enum GraphemeBreak {
        GraphemeBreakOther,
        GraphemeBreakCR,
        GraphemeBreakLF,
        GraphemeBreakControl,
        GraphemeBreakExtend,
        GraphemeBreakL,
        GraphemeBreakV,
        GraphemeBreakT,
        GraphemeBreakLV,
        GraphemeBreakLVT
    };


    enum WordBreak {
        WordBreakOther,
        WordBreakFormat,
        WordBreakKatakana,
        WordBreakALetter,
        WordBreakMidLetter,
        WordBreakMidNum,
        WordBreakNumeric,
        WordBreakExtendNumLet
    };


    enum SentenceBreak {
        SentenceBreakOther,
        SentenceBreakSep,
        SentenceBreakFormat,
        SentenceBreakSp,
        SentenceBreakLower,
        SentenceBreakUpper,
        SentenceBreakOLetter,
        SentenceBreakNumeric,
        SentenceBreakATerm,
        SentenceBreakSTerm,
        SentenceBreakClose
    };


    // see http://www.unicode.org/reports/tr14/tr14-19.html
    // we don't use the XX, AI and CB properties and map them to AL instead.
    // as we don't support any EBDIC based OS'es, NL is ignored and mapped to AL as well.
    enum LineBreakClass {
        LineBreak_OP, LineBreak_CL, LineBreak_QU, LineBreak_GL, LineBreak_NS,
        LineBreak_EX, LineBreak_SY, LineBreak_IS, LineBreak_PR, LineBreak_PO,
        LineBreak_NU, LineBreak_AL, LineBreak_ID, LineBreak_IN, LineBreak_HY,
        LineBreak_BA, LineBreak_BB, LineBreak_B2, LineBreak_ZW, LineBreak_CM,
        LineBreak_WJ, LineBreak_H2, LineBreak_H3, LineBreak_JL, LineBreak_JV,
        LineBreak_JT, LineBreak_SA, LineBreak_SG,
        LineBreak_SP, LineBreak_CR, LineBreak_LF, LineBreak_BK
    };


    Q_CORE_EXPORT GraphemeBreak QT_FASTCALL graphemeBreakClass(uint ucs4);
    inline int graphemeBreakClass(QChar ch)
    { return graphemeBreakClass(ch.unicode()); }

    Q_CORE_EXPORT WordBreak QT_FASTCALL wordBreakClass(uint ucs4);
    inline int wordBreakClass(QChar ch)
    { return wordBreakClass(ch.unicode()); }

    Q_CORE_EXPORT SentenceBreak QT_FASTCALL sentenceBreakClass(uint ucs4);
    inline int sentenceBreakClass(QChar ch)
    { return sentenceBreakClass(ch.unicode()); }

    Q_CORE_EXPORT LineBreakClass QT_FASTCALL lineBreakClass(uint ucs4);
    inline int lineBreakClass(QChar ch)
    { return lineBreakClass(ch.unicode()); }

    Q_CORE_EXPORT int QT_FASTCALL script(uint ucs4);
    inline int script(QChar ch)
    { return script(ch.unicode()); }


    inline bool isNonCharacter(uint ucs4)
    {
        // Noncharacter_Code_Point:
        // Unicode has a couple of "non-characters" that one can use internally,
        // but are not allowed to be used for text interchange.
        // Those are the last two entries each Unicode Plane (U+FFFE..U+FFFF,
        // U+1FFFE..U+1FFFF, etc.) as well as the entries in range U+FDD0..U+FDEF

        return ucs4 >= 0xfdd0 && (ucs4 <= 0xfdef || (ucs4 & 0xfffe) == 0xfffe);
    }

} // namespace QUnicodeTables

QT_END_NAMESPACE

#endif // QUNICODETABLES_P_H
