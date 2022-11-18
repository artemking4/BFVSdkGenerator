// Object: UISquadReinforcementActionDescription
// ClassId: 5423
// RuntimeId: 65309
// TypeInfo: 0x0000000144D99110
#include "../CasablancaShared/UIGenericUnlockMetaData.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/Int32.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISquadReinforcementActionDescription : public CasablancaShared::UIGenericUnlockMetaData {
        UIIncubatorShared::LocalizedStringId PurchasedSid; // 0x58
        UIIncubatorShared::LocalizedStringId ReservedSid; // 0x60
        Int32 VoiceoOverIdentifier; // 0x68
        char pad_0x6C[0x4];
        UIIncubatorShared::LocalizedStringId ReservedTooltipDescriptionSid; // 0x70
        UIIncubatorShared::LocalizedStringId ReservedTooltipSid; // 0x78
        GameShared::InputConceptIdentifiers ReservedTooltipInputConcept; // 0x80
        char pad_0x84[0x4];
        UIIncubatorShared::LocalizedStringId ConfirmedTooltipDescriptionSid; // 0x88
        UIIncubatorShared::LocalizedStringId ConfirmedTooltipSid; // 0x90
        GameShared::InputConceptIdentifiers ConfirmedTooltipInputConcept; // 0x98
        char pad_0x9C[0x4];
    }; // 0xA0
    static_assert(sizeof(UISquadReinforcementActionDescription) == 0xA0);
}
#pragma pack(pop)