// Object: PatchVersionSettings
// ClassId: 5006
// RuntimeId: 57758
// TypeInfo: 0x0000000144DB3740
#include "../Core/SystemSettings.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class PatchVersionSettings : public Core::SystemSettings {
        CString Version; // 0x20
    }; // 0x28
    static_assert(sizeof(PatchVersionSettings) == 0x28);
}
#pragma pack(pop)