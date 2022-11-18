// Object: AISoundComponentData
// ClassId: 1700
// RuntimeId: 45935
// TypeInfo: 0x0000000144C11F00
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AISoundComponentData : public Entity::GameComponentData {
        Float32 PlayerProximityMinRadius; // 0x80
        Float32 PlayerProximityMaxRadius; // 0x84
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(AISoundComponentData) == 0x90);
}
#pragma pack(pop)