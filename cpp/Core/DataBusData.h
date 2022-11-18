// Object: DataBusData
// ClassId: 247
// RuntimeId: 25982
// TypeInfo: 0x0000000144BE8970
#include "../Core/Asset.h"
#include "../Global/Uint16.h"
#include "../Core/PropertyConnection.h"
#include "../Core/LinkConnection.h"
#include "../Core/DynamicDataContainer.h"

namespace Core {
    class DataBusData : public Core::Asset {
        Array<Core::PropertyConnection> PropertyConnections; // 0x20
        Array<Core::LinkConnection> LinkConnections; // 0x28
        Core::DynamicDataContainer Interface; // 0x30
        Uint16 Flags; // 0x38
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(DataBusData) == 0x40);
}