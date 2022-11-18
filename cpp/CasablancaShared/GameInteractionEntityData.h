// Object: GameInteractionEntityData
// ClassId: 3381
// RuntimeId: 29096
// TypeInfo: 0x0000000144D2AC20
#include "../GameShared/InteractionEntityData.h"
#include "../Global/Float32.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/InteractionEntityType.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"
#include "../GameShared/BlinkType.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIWorldIconBehavior.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class GameInteractionEntityData : public GameShared::InteractionEntityData {
        Float32 DelayBetweenUses; // 0xA0
        Float32 TimeToKeepAlive; // 0xA4
        GameShared::TeamId TeamId; // 0xA8
        GameShared::TeamId SpectatorTeamId; // 0xAC
        Int32 InputAction; // 0xB0
        Float32 HoldToInteractTime; // 0xB4
        CasablancaShared::InteractionEntityType InteractionEntityType; // 0xB8
        char pad_0xBC[0x4];
        UIIncubatorShared::LocalizedStringId InteractionStringId; // 0xC0
        CString InteractionSid; // 0xC8
        GameShared::BlinkType Blink; // 0xD0
        char pad_0xD4[0x4];
        UIIncubatorShared::LocalizedStringId InteractingStringId; // 0xD8
        CString InteractingSid; // 0xE0
        UIIncubatorShared::LocalizedStringId NameStringId; // 0xE8
        CString NameSid; // 0xF0
        Float32 InteractionVerticalOffset; // 0xF8
        char pad_0xFC[0x4];
        UIIncubatorShared::LocalizedStringId FriendlyTextStringId; // 0x100
        CString FriendlyTextSid; // 0x108
        UIIncubatorShared::LocalizedStringId EnemyTextStringId; // 0x110
        CString EnemyTextSid; // 0x118
        Float32 CapturepointVerticalOffset; // 0x120
        Float32 ArtilleryIconBlinkRate; // 0x124
        Float32 AirborneIconBlinkRate; // 0x128
        Int32 AirborneBombState; // 0x12C
        Float32 AirborneIconAlpha; // 0x130
        char pad_0x134[0x4];
        CString IconName; // 0x138
        GameShared::UIWorldIconBehavior IconBehavior; // 0x140
        Float32 TacticalRadius; // 0x148
        char pad_0x14C[0x4];
        Array<CString> LicensesNeeded; // 0x150
        Array<CString> ConsumablesDisabling; // 0x158
        Array<CString> ConsumablesNeeded; // 0x160
        Boolean ShrinkSnap; // 0x168
        Boolean ShowAsCapturePoint; // 0x169
        Boolean FriendlyInteractionEnabled; // 0x16A
        Boolean EnemyInteractionEnabled; // 0x16B
        Boolean IsArtilleryAvailable; // 0x16C
        Boolean IsAirborne; // 0x16D
        Boolean DisplayUseTeamInteractionEnabled; // 0x16E
        Boolean UseCustomIcon; // 0x16F
        Boolean ForceSnap; // 0x170
        Boolean IconVisible; // 0x171
        char pad_0x172[0xE];
    }; // 0x180
    static_assert(sizeof(GameInteractionEntityData) == 0x180);
}
#pragma pack(pop)