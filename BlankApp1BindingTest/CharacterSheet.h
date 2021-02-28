#pragma once
#include "CharacterSheet.g.h"

namespace winrt::BlankApp1BindingTest::implementation
{
    struct CharacterSheet : CharacterSheetT<CharacterSheet>
    {
        CharacterSheet();
        
        double Strength();
        void Strength(double value);
        struct Physical
        {
            double Strength;
        }Physical;
        winrt::event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;
        winrt::event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
    };
}
namespace winrt::BlankApp1BindingTest::factory_implementation
{
    struct CharacterSheet : CharacterSheetT<CharacterSheet, implementation::CharacterSheet>
    {
    };
}
