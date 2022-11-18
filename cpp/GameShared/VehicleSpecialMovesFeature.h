// Object: VehicleSpecialMovesFeature
// ClassId: 903
// RuntimeId: 33049
// TypeInfo: 0x0000000144E9AE10
#include "../Core/Asset.h"
#include "../GameShared/SpecialMoveFeature.h"

#pragma pack(push, 8)
namespace GameShared {
    class VehicleSpecialMovesFeature : public Core::Asset {
        Array<GameShared::SpecialMoveFeature> SpecialMoves; // 0x20
    }; // 0x28
    static_assert(sizeof(VehicleSpecialMovesFeature) == 0x28);
}
#pragma pack(pop)