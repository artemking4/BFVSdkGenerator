// Object: UINetGraphWidgetData
// ClassId: 3824
// RuntimeId: 34597
// TypeInfo: 0x0000000144D88820
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../GameShared/UIElementColor.h"
#include "../CasablancaShared/NetGraphProperties.h"
#include "../CasablancaShared/NetGraphDamageLogProperties.h"
#include "../CasablancaShared/NetGraphProjectileDataProperties.h"
#include "../CasablancaShared/NetGraphInfoTypeSettings.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UINetGraphWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        GameShared::UIElementColor BackgroundColor; // 0x80
        CasablancaShared::NetGraphProperties GraphProperties; // 0xA0
        CasablancaShared::NetGraphDamageLogProperties DamageLogProperties; // 0xF0
        CasablancaShared::NetGraphProjectileDataProperties ProjectileDataProperties; // 0x160
        CasablancaShared::NetGraphInfoTypeSettings InfoTypeSettings; // 0x190
        char pad_0x198[0x8];
    }; // 0x1A0
    static_assert(sizeof(UINetGraphWidgetData) == 0x1A0);
}
#pragma pack(pop)