// Object: BFUISpectatorInputTextureSourceEntityData
// ClassId: 2401
// RuntimeId: 63670
// TypeInfo: 0x0000000144D42350
#include "../Entity/EntityData.h"
#include "../GameShared/EntryInputActionMapsData.h"
#include "../CasablancaShared/BFSpectatorInputModifierLayoutAsset.h"
#include "../UI/UIInputAction.h"
#include "../GameShared/InputConceptIdentifiers.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISpectatorInputTextureSourceEntityData : public Entity::EntityData {
        GameShared::EntryInputActionMapsData SpectatorInputActionMaps; // 0x20
        CasablancaShared::BFSpectatorInputModifierLayoutAsset BroadcasterInputModifierLayout; // 0x28
        CasablancaShared::BFSpectatorInputModifierLayoutAsset CinematographerInputModifierLayout; // 0x30
        UI::UIInputAction InputAction; // 0x38
        GameShared::InputConceptIdentifiers InputConcept; // 0x3C
        Boolean UsingBroadcasterLayout; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(BFUISpectatorInputTextureSourceEntityData) == 0x48);
}
#pragma pack(pop)