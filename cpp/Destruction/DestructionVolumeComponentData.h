// Object: DestructionVolumeComponentData
// ClassId: 1756
// RuntimeId: 16434
// TypeInfo: 0x0000000144E22080
#include "../Entity/GameComponentData.h"
#include "../WorldBase/DestructionVolumeBaseData.h"

#pragma pack(push, 16)
namespace Destruction {
    class DestructionVolumeComponentData : public Entity::GameComponentData {
        WorldBase::DestructionVolumeBaseData DestructionVolumeData; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(DestructionVolumeComponentData) == 0x90);
}
#pragma pack(pop)