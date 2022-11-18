// Object: TestPointEntityData
// ClassId: 3450
// RuntimeId: 50237
// TypeInfo: 0x0000000144E8F3E0
#include "../Entity/SpatialEntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace GameShared {
    class TestPointEntityData : public Entity::SpatialEntityData {
        CString OutputName; // 0x60
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(TestPointEntityData) == 0x70);
}
#pragma pack(pop)