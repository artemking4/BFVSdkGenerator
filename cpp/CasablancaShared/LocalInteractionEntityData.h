// Object: LocalInteractionEntityData
// ClassId: 3385
// RuntimeId: 628
// TypeInfo: 0x0000000144D2AB20
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class LocalInteractionEntityData : public Entity::SpatialEntityData {
        Float32 DelayBetweenUses; // 0x60
        Float32 TimeToKeepAlive; // 0x64
        Int32 InputAction; // 0x68
        Float32 HoldToInteractTime; // 0x6C
        Float32 InteractionVerticalOffset; // 0x70
        char pad_0x74[0x4];
        CString IconName; // 0x78
        Float32 UseWithinRadius; // 0x80
        Float32 UseWithinAngle; // 0x84
        Float32 UseWithinWidth; // 0x88
        Float32 UseWithinHeight; // 0x8C
        Float32 UseWithinXOffset; // 0x90
        Float32 UseWithinYOffset; // 0x94
        Float32 FacingInteractorAngle; // 0x98
        char pad_0x9C[0x4];
        UIIncubatorShared::LocalizedStringId InteractionStringId; // 0xA0
        CString InteractionSid; // 0xA8
        UIIncubatorShared::LocalizedStringId InteractingStringId; // 0xB0
        CString InteractingSid; // 0xB8
        UIIncubatorShared::LocalizedStringId NameStringId; // 0xC0
        CString NameSid; // 0xC8
        Boolean Enabled; // 0xD0
        Boolean TestIfOccluded; // 0xD1
        char pad_0xD2[0xE];
    }; // 0xE0
    static_assert(sizeof(LocalInteractionEntityData) == 0xE0);
}
#pragma pack(pop)