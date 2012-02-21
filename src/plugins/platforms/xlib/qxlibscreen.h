/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the plugins of the Qt Toolkit.
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

#ifndef QTESTLITESCREEN_H
#define QTESTLITESCREEN_H

#include <QtGui/QPlatformScreen>
#include "qxlibintegration.h"

QT_BEGIN_NAMESPACE

class QXlibCursor;
class QXlibKeyboard;
class QXlibDisplay;

class QXlibScreen : public QObject, public QPlatformScreen
{
    Q_OBJECT
public:
    QXlibScreen(QXlibNativeInterface *nativeInterface);

    ~QXlibScreen();

    QRect geometry() const { return mGeometry; }
    int depth() const { return mDepth; }
    QImage::Format format() const { return mFormat; }
    QSizeF physicalSize() const { return mPhysicalSize; }

    Window rootWindow();
    unsigned long blackPixel();
    unsigned long whitePixel();

    bool handleEvent(XEvent *xe);
    bool waitForClipboardEvent(Window win, int type, XEvent *event, int timeout);

    QImage grabWindow(Window window, int x, int y, int w, int h);

    static QXlibScreen *testLiteScreenForWidget(QWindow *widget);

    QXlibDisplay *display() const;
    int xScreenNumber() const;

    Visual *defaultVisual() const;

    QXlibKeyboard *keyboard() const;

#if !defined(QT_NO_OPENGL) && defined(QT_OPENGL_ES_2)
    void *eglDisplay() const { return mEGLDisplay; }
    void setEglDisplay(void *display) { mEGLDisplay = display; }
#endif

public slots:
    void eventDispatcher();

private:

    void handleSelectionRequest(XEvent *event);
    QXlibNativeInterface *mNativeInterface;
    QRect mGeometry;
    QSizeF mPhysicalSize;
    int mDepth;
    QImage::Format mFormat;
    QXlibCursor *mCursor;
    QXlibKeyboard *mKeyboard;

    QXlibDisplay * mDisplay;
#if !defined(QT_NO_OPENGL) && defined(QT_OPENGL_ES_2)
    void *mEGLDisplay;
#endif
    int mScreen;
};

QT_END_NAMESPACE

#endif // QTESTLITESCREEN_H
