/*
 *  Copyright (c) 2019 Anna Medonosova <anna.medonosova@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef KOGAMUTMASKTEST_H
#define KOGAMUTMASKTEST_H

#include <QObject>

class KoGamutMaskTest : public QObject
{
    Q_OBJECT
public:
    explicit KoGamutMaskTest(QObject *parent = nullptr);

private Q_SLOTS:
    void testCoordIsClear();
    void testCoordIsClear_data();

    void testLoad();
    void testLoad_data();
// TODO: add preview vs. non-preview testing
};

#endif // KOGAMUTMASKTEST_H