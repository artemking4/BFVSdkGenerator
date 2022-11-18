// Object: MovementComponentData
// ClassId: 1810
// RuntimeId: 41530
// TypeInfo: 0x0000000144F39B90
#include "../Entity/GameComponentData.h"
#include "../SoldierShared/MovementComponentBinding.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../SoldierShared/MoveToTargetData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class MovementComponentData : public Entity::GameComponentData {
        Core::LinearTransform MoveToTransform; // 0x80
        SoldierShared::MovementComponentBinding MovementBinding; // 0xC0
        Float32 ClampVelocity; // 0x160
        char pad_0x164[0x4];
        Array<SoldierShared::MoveToTargetData> MoveToTargetList; // 0x168
        Int32 MoveToTargetIndex; // 0x170
        Float32 ClampExitSpeed; // 0x174
        Boolean FeedTrajectoryCorrectionsThroughGameState; // 0x178
        Boolean ClientSidePhysicsControlled; // 0x179
        char pad_0x17A[0x6];
    }; // 0x180
    static_assert(sizeof(MovementComponentData) == 0x180);
}
#pragma pack(pop)