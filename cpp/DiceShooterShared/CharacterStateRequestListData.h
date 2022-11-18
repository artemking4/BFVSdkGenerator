// Object: CharacterStateRequestListData
// ClassId: 322
// RuntimeId: 58903
// TypeInfo: 0x0000000144DE8210
#include "../Core/DataContainerPolicyAsset.h"
#include "../DiceShooterShared/CharacterStateRequestDataBase.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateRequestListData : public Core::DataContainerPolicyAsset {
        Array<DiceShooterShared::CharacterStateRequestDataBase> Requests; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterStateRequestListData) == 0x28);
}
#pragma pack(pop)