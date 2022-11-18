// Object: NetworkPerfOverlaySettings
// ClassId: 4351
// RuntimeId: 31364
// TypeInfo: 0x0000000144EA4F10
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Network {
    class NetworkPerfOverlaySettings : public Core::DataContainer {
        Core::Vec2 GraphPos; // 0x18
        Float32 UpdateFrequency; // 0x20
        Float32 ShowOnProblemsTimeout; // 0x24
        Boolean Enable; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(NetworkPerfOverlaySettings) == 0x30);
}
#pragma pack(pop)