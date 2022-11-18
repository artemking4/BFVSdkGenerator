// Object: DynamicDataContainer
// ClassId: 1525
// RuntimeId: 35730
// TypeInfo: 0x0000000144BE89F0
#include "../Core/DataContainer.h"
#include "../Core/DataField.h"

namespace Core {
    class DynamicDataContainer : public Core::DataContainer {
        Array<Core::DataField> Fields; // 0x18
    }; // 0x20
    static_assert(sizeof(DynamicDataContainer) == 0x20);
}