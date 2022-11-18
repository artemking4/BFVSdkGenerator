// Object: CharacterStateChannelReaderEntityData
// ClassId: 2467
// RuntimeId: 34802
// TypeInfo: 0x0000000144DE8810
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../MotionMachineShared/CharacterStatePublicOrPrivateChannelData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateChannelReaderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<MotionMachineShared::CharacterStatePublicOrPrivateChannelData> Channels; // 0x28
        Boolean AlwaysEnabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(CharacterStateChannelReaderEntityData) == 0x38);
}
#pragma pack(pop)