// Object: DakarInteractionEntityData
// ClassId: 3418
// RuntimeId: 56557
// TypeInfo: 0x0000000144D028A0
#include "../CasablancaShared/NonGhostInteractionEntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UsageConstraints.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DakarInteractionEntityData : public CasablancaShared::NonGhostInteractionEntityData {
        CasablancaShared::UsageConstraints InteractionUsageConstraints; // 0x60
        Float32 HoldInteractionTime; // 0x7C
        Float32 TimeToKeepAlive; // 0x80
        char pad_0x84[0x4];
        CString IconName; // 0x88
        UIIncubatorShared::LocalizedStringId InteractionStringId; // 0x90
        Boolean Enabled; // 0x98
        Boolean IsAvailable; // 0x99
        Boolean TestIfOccluded; // 0x9A
        Boolean DisableOnInteraction; // 0x9B
        Boolean UseDynamicTransform; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(DakarInteractionEntityData) == 0xA0);
}
#pragma pack(pop)