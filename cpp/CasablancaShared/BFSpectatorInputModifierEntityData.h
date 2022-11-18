// Object: BFSpectatorInputModifierEntityData
// ClassId: 2137
// RuntimeId: 4673
// TypeInfo: 0x0000000144D423D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/EntryInputActionMapsData.h"
#include "../CasablancaShared/BFSpectatorInputModifierLayoutAsset.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorInputModifierEntityData : public Entity::EntityData {
        GameShared::EntryInputActionMapsData SpectatorInputActionMaps; // 0x20
        CasablancaShared::BFSpectatorInputModifierLayoutAsset InputerModifierLayout; // 0x28
        Array<GameShared::InputConceptIdentifiers> Modifier1InputConcepts; // 0x30
        Array<GameShared::InputConceptIdentifiers> Modifier2InputConcepts; // 0x38
        Boolean OnlyUseModifiersWhenUsingController; // 0x40
        Boolean EnableModifier1; // 0x41
        Boolean EnableModifier2; // 0x42
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(BFSpectatorInputModifierEntityData) == 0x48);
}
#pragma pack(pop)