// Object: HealthComponentData
// ClassId: 1925
// RuntimeId: 15262
// TypeInfo: 0x0000000144F0FA00
#include "../Entity/ComponentData.h"

#pragma pack(push, 16)
namespace Physics {
    class HealthComponentData : public Entity::ComponentData {
    }; // 0x80
    static_assert(sizeof(HealthComponentData) == 0x80);
}
#pragma pack(pop)