// Object: MovementActionRoot
// ClassId: 580
// RuntimeId: 42714
// TypeInfo: 0x0000000144E8F860
#include "../Core/Asset.h"
#include "../GameShared/MovementActionData.h"

#pragma pack(push, 8)
namespace GameShared {
    class MovementActionRoot : public Core::Asset {
        GameShared::MovementActionData StartSequence; // 0x20
    }; // 0x28
    static_assert(sizeof(MovementActionRoot) == 0x28);
}
#pragma pack(pop)