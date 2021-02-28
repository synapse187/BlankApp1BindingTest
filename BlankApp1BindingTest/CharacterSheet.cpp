#include "pch.h"
#include "CharacterSheet.h"
#include "CharacterSheet.g.cpp"

namespace winrt::BlankApp1BindingTest::implementation
{
    CharacterSheet::CharacterSheet()
    {
        Physical.Strength = 10;
    }
    
    double CharacterSheet::Strength()
    {
        return Physical.Strength;
    }
    void CharacterSheet::Strength(double value)
    {
        if (Physical.Strength != value)
        {
            Physical.Strength = value;
            m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"Strength" });
        };
    }
    winrt::event_token CharacterSheet::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
        return m_propertyChanged.add(handler);
    }
    void CharacterSheet::PropertyChanged(winrt::event_token const& token) noexcept
    {
        m_propertyChanged.remove(token);
    }

}
