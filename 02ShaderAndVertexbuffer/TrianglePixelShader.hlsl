#include "Triangle.hlsli"

float4 ps(VertexOut o) : SV_TARGET
{
	return o.color;
}