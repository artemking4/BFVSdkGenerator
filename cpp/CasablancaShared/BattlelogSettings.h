// Object: BattlelogSettings
// ClassId: 4971
// RuntimeId: 8204
// TypeInfo: 0x0000000144D4CC70
#include "../Core/SystemSettings.h"
#include "../WebUtils/URLConfigData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BattlelogSettings : public Core::SystemSettings {
        Array<WebUtils::URLConfigData> BattlelogURLs; // 0x20
    }; // 0x28
    static_assert(sizeof(BattlelogSettings) == 0x28);
}
#pragma pack(pop)