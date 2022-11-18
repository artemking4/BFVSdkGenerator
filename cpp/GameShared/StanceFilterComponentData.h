// Object: StanceFilterComponentData
// ClassId: 1856
// RuntimeId: 44157
// TypeInfo: 0x0000000144E8DD60
#include "../Entity/GameComponentData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/ActionSuppressor.h"

#pragma pack(push, 16)
namespace GameShared {
    class StanceFilterComponentData : public Entity::GameComponentData {
        Array<Int32> ValidStances; // 0x80
        Float32 StanceChangeTime; // 0x88
        char pad_0x8C[0x4];
        Array<GameShared::ActionSuppressor> ActionsToFilter; // 0x90
        Boolean UndoParentStanceFilter; // 0x98
        Boolean FilterSpecificActions; // 0x99
        char pad_0x9A[0x6];
    }; // 0xA0
    static_assert(sizeof(StanceFilterComponentData) == 0xA0);
}
#pragma pack(pop)