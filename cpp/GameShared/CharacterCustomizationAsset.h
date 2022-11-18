// Object: CharacterCustomizationAsset
// ClassId: 328
// RuntimeId: 62096
// TypeInfo: 0x0000000144E81440
#include "../GameShared/CustomizationAsset.h"
#include "../GameShared/UIHudIcon.h"
#include "../Global/CString.h"
#include "../GameShared/CustomizationTable.h"
#include "../Audio/VoiceOverLabel.h"

#pragma pack(push, 8)
namespace GameShared {
    class CharacterCustomizationAsset : public GameShared::CustomizationAsset {
        GameShared::UIHudIcon UIHudIcon; // 0x28
        char pad_0x2C[0x4];
        CString UIKitIconName; // 0x30
        CString LabelSid; // 0x38
        GameShared::CustomizationTable VisualTable; // 0x40
        GameShared::CustomizationTable SpecializationTable; // 0x48
        Array<Audio::VoiceOverLabel> VoiceOverLabels; // 0x50
    }; // 0x58
    static_assert(sizeof(CharacterCustomizationAsset) == 0x58);
}
#pragma pack(pop)