/*
** EPITECH PROJECT, 2020
** UNIT TESTS
** File description:
** NO DESCRIPTION
*/

#include <criterion/criterion.h>
#include "../include/rush3.h"

Test(suite_name, test_name)
{
    cr_assert_eq(count_X("ooooo\noooooo\n"), 5);
    cr_assert_eq(count_X(""), 0);

    cr_assert_eq(count_Y("ooooo\noooooo\n"), 2);
    cr_assert_eq(count_Y(""), 0);

    
    cr_assert_eq(rush3("o"), 1);
    cr_assert_eq(rush3("*"), 1);
    cr_assert_eq(rush3("/"), 1);
    cr_assert_eq(rush3(""), 0);
}

Test(suite_name2, test_name2)
{
   
    cr_assert_eq(error("cc"), 0);
    cr_assert_eq(error("CCCCC\nCCCCCCCCCCCCCCCCCCCC"), 1);
    cr_assert_eq(error("AAAA\nCCCCCCCCAAAAAAAAAACCC"), 1);
    cr_assert_eq(error("CCCCC\nCCCCCCCCCCCCCCCCCCCC"), 1);

    cr_assert_eq(rush1_345("CCCCC\nCCCCCCCCCCCCCCCCCCCC"), 0);
    cr_assert_eq(rush1_345("BBBBB\nBBBBBBBBBBBBBBBBBBBB"), 1);
}