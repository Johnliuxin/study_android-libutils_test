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
#include <utils/RefBase.h>  //for sp

#include "test_func_list.h"

using namespace android;

class TestSP : virtual public RefBase
{
public:
    TestSP() { printf("TestSP()\n");}
    ~TestSP() { printf("~TestSP()\n");}
};

void main_sp_test()
{
//-----------------------------------------------------
//if let sp point mtsp = NULL, what will happen?
    //1st : this will cause constructed
    sp<TestSP> mtsp = new TestSP();
    printf("constructor function should be executed\n");
    
    printf("sc(%d), wc(%d)\n", mtsp->getStrongCount(), mtsp->getWeakRefs()->getWeakCount());

    //2st : this will cause destructed
    mtsp = NULL;
    printf("destructor function should be executed\n");
    printf("\n");
//-----------------------------------------------------

    printf("Done %s, use Ctrl+C to exit\n", __func__);
    while(1);
}
