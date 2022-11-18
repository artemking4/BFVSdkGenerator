// Object: CableConnectionPointData
// ClassId: 1689
// RuntimeId: 39988
// TypeInfo: 0x0000000144C1AC40
#include "../Entity/ComponentData.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace Cables {
    class CableConnectionPointData : public Entity::ComponentData {
        Int32 ConnectionIndex; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(CableConnectionPointData) == 0x90);
}
#pragma pack(pop)