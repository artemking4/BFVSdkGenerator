// Object: PhysicsDrivenComponentData
// ClassId: 1821
// RuntimeId: 51679
// TypeInfo: 0x0000000144E83040
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace GameShared {
    class PhysicsDrivenComponentData : public Entity::GameComponentData {
        Float32 SprintMultiplier; // 0x80
        Int32 ParachuteToggle; // 0x84
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(PhysicsDrivenComponentData) == 0x90);
}
#pragma pack(pop)