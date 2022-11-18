// Object: StackedSpawnData
// ClassId: 1615
// RuntimeId: 53858
// TypeInfo: 0x0000000144C320F0
#include "../GameShared/ExtraSpawnData.h"
#include "../Casablanca/StackedSpawningBehaviour.h"

#pragma pack(push, 8)
namespace Casablanca {
    class StackedSpawnData : public GameShared::ExtraSpawnData {
        Casablanca::StackedSpawningBehaviour Behaviour; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(StackedSpawnData) == 0x20);
}
#pragma pack(pop)