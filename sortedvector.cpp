/*
 * Copyright (C) 2013 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <utils/SortedVector.h> //for SortedVector

#include "test_func_list.h"

using namespace android;

void main_sortedvector_test()
{
//-----------------------------------------------------
//what is the correct way to remove item from SortedVector

    //1st : show a wrong way
    printf("remove SortedVector at wrong way\n");
    SortedVector< int >  mSortedInts1;
    mSortedInts1.add(1);
    mSortedInts1.add(2);
    mSortedInts1.add(3);

    int32_t nsize;
    for (int i = 0, nsize = mSortedInts1.size(); i < nsize; ++i) {
        printf("%d\n", mSortedInts1[i]);
        mSortedInts1.remove(mSortedInts1[i]);
    }

    printf("\n");

    //2st : show the right way
    printf("remove SortedVector at right way\n");
    SortedVector< int >  mSortedInts2;
    mSortedInts2.add(1);
    mSortedInts2.add(2);
    mSortedInts2.add(3);
    while(!mSortedInts2.isEmpty()) {
        printf("%d\n", mSortedInts2[0]);
        mSortedInts2.remove(mSortedInts2[0]);
    }

    printf("Done %s\n", __func__);
//-----------------------------------------------------
}
