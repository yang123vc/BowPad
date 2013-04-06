// This file is part of BowPad.
//
// Copyright (C) 2013 - Stefan Kueng
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// See <http://www.gnu.org/licenses/> for a copy of the full license text
//
#pragma once

typedef uptr_t Document;

enum FormatType { UNKNOWN_FORMAT, WIN_FORMAT, MAC_FORMAT, UNIX_FORMAT };

class CPosData
{
public:
    CPosData() 
        : m_nFirstVisibleLine(0)
        , m_nStartPos(0)
        , m_nEndPos(0)
        , m_xOffset(0)
        , m_nScrollWidth(1)
        , m_nSelMode(0)
    {};
    ~CPosData(){}

    size_t m_nFirstVisibleLine;
    size_t m_nStartPos;
    size_t m_nEndPos;
    size_t m_xOffset;
    size_t m_nSelMode;
    size_t m_nScrollWidth;
};

class CDocument
{
public:
    CDocument()
        : m_document(NULL)
        , m_format(UNKNOWN_FORMAT)
        , m_bHasBOM(false)
        , m_encoding(-1)
        , m_bIsDirty(false)
        , m_bIsReadonly(false)
    {
    }


    Document                m_document;
    FormatType              m_format;
    bool                    m_bHasBOM;
    int                     m_encoding;
    std::wstring            m_path;
    CPosData                m_position;
    bool                    m_bIsDirty;
    bool                    m_bIsReadonly;
};


