// Object: DeploySettings
// ClassId: 4976
// RuntimeId: 840
// TypeInfo: 0x0000000144CFB7D0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DeploySettings : public Core::SystemSettings {
        Boolean PCNavigationEnabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(DeploySettings) == 0x28);
}
#pragma pack(pop)