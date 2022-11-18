// Object: UINotificationMessageWidgetData
// ClassId: 3826
// RuntimeId: 44814
// TypeInfo: 0x0000000144D9B710
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UINotificationMessageWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::Vec3 YellMessageColor; // 0x80
        Float32 MessageDuration; // 0x90
        Float32 FadeDuration; // 0x94
        Float32 MessageMinDuration; // 0x98
        Boolean IsPreRound; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(UINotificationMessageWidgetData) == 0xA0);
}
#pragma pack(pop)