// Object: UnlockSystemSettings
// ClassId: 5038
// RuntimeId: 17272
// TypeInfo: 0x0000000144DC9DC0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class UnlockSystemSettings : public Core::SystemSettings {
        Boolean UnlockEverything; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UnlockSystemSettings) == 0x28);
}
#pragma pack(pop)