// Object: FadeEntityData
// ClassId: 2737
// RuntimeId: 44931
// TypeInfo: 0x0000000144E775C0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Core/LocalPlayerId.h"

#pragma pack(push, 8)
namespace GameShared {
    class FadeEntityData : public Entity::EntityData {
        Float32 FadeTime; // 0x20
        Float32 AltFadeTime; // 0x24
        Core::FloatCurve Curve; // 0x28
        Float32 MaxWaitFadedWhileStreamingTime; // 0x30
        Core::LocalPlayerId LocalPlayerId; // 0x34
        Boolean FadeScreen; // 0x38
        Boolean FadeUI; // 0x39
        Boolean FadeAudio; // 0x3A
        Boolean FadeMovie; // 0x3B
        Boolean FadeRumble; // 0x3C
        Boolean StartFaded; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(FadeEntityData) == 0x40);
}
#pragma pack(pop)