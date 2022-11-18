// Object: SoundContextGroupData
// ClassId: 4665
// RuntimeId: 33246
// TypeInfo: 0x0000000144E15A40
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/SoundContextInteractionData.h"
#include "../Audio/SoundContextGroupType.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundContextGroupData : public Core::DataContainer {
        CString Name; // 0x18
        Array<Audio::SoundContextInteractionData> Interactions; // 0x20
        Audio::SoundContextGroupType GroupType; // 0x28
        char pad_0x2C[0x4];
        Array<Uint32> GeometryId; // 0x30
        Float32 Radius; // 0x38
        Boolean RenderDebug; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(SoundContextGroupData) == 0x40);
}
#pragma pack(pop)