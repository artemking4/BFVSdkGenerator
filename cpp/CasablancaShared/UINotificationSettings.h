// Object: UINotificationSettings
// ClassId: 5036
// RuntimeId: 38603
// TypeInfo: 0x0000000144D1F270
#include "../Core/SystemSettings.h"
#include "../CasablancaShared/UINotificationSetting.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINotificationSettings : public Core::SystemSettings {
        Array<CasablancaShared::UINotificationSetting> Settings; // 0x20
    }; // 0x28
    static_assert(sizeof(UINotificationSettings) == 0x28);
}
#pragma pack(pop)