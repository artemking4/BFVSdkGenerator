// Object: HavokMemoryContext
// ClassId: 8366
// RuntimeId: 57997
// TypeInfo: 0x0000000144F141D0
#include "../Physics/IglooMemoryContext.h"

#pragma pack(push, 8)
namespace Physics {
    class HavokMemoryContext : public Physics::IglooMemoryContext {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(HavokMemoryContext) == 0x10);
}
#pragma pack(pop)