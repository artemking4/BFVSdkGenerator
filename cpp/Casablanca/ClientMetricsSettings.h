// Object: ClientMetricsSettings
// ClassId: 1409
// RuntimeId: 16479
// TypeInfo: 0x0000000144C4F760
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ClientMetricsSettings : public Core::DataContainer {
        Boolean Enabled; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(ClientMetricsSettings) == 0x20);
}
#pragma pack(pop)