/****************************************************************************
**
** Copyright (C) 2013 Thorbjørn Lund Martsum - tmartsum[at]gmail.com
** Contact: https://www.qt.io/licensing/
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include <QDebug>
#include <QVector>
void testErase()
{
    QList<int> a, b;
    a.append(5);
    a.append(6);
    a.append(7);
    b = a;
    a.erase(a.begin());
    qDebug() << "erase - Executing line with error now.";
    // a.erase(a.end());
    a.erase(b.begin());
}
void testInsert()
{
    QList<int> a, b;
    a.insert(a.begin(), 1);
    a.insert(a.begin(), 2);
    a.insert(a.end(), 3);
    b = a;
    qDebug() << "insert - Executing line with error now.";
    a.insert(b.begin(), 4);
}
int main()
{
    // testErase();
    testInsert();
    return 0;
}
