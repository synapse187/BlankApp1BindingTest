#pragma once
#include "CharacterSheet.h"
#include "MainPage.g.h"

namespace winrt::BlankApp1BindingTest::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
        BlankApp1BindingTest::CharacterSheet ViewModel();
        int32_t MyProperty();
        void MyProperty(int32_t value);
    private:
        BlankApp1BindingTest::CharacterSheet m_viewModel{ nullptr };
    };
}

namespace winrt::BlankApp1BindingTest::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
