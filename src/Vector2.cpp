/*
 * File:   Vector2.cpp
 * Author: JoPe
 *
 * Created on 6 de septiembre de 2013, 15:16
 */

#include "VEC/Vector2.hpp"

#include <cassert>
#include <cmath>

namespace vec
{
    double & Vector2::operator []( int const& i_arrayIndex )
    {
        assert( i_arrayIndex >= 0 && i_arrayIndex < 2 );
        return m_data[ i_arrayIndex ];
    }

    double const& Vector2::operator []( int const& i_arrayIndex ) const
    {
        assert( i_arrayIndex >= 0 && i_arrayIndex < 2 );
        return m_data[ i_arrayIndex ];
    }

    void Vector2::Add( Vector2 const& i_rhs )
    {
        m_data[ 0 ] += i_rhs[ 0 ];
        m_data[ 1 ] += i_rhs[ 1 ];
    }

    void Vector2::Subtract( Vector2 const& i_rhs )
    {
        m_data[ 0 ] -= i_rhs[ 0 ];
        m_data[ 1 ] -= i_rhs[ 1 ];
    }

    void Vector2::Scale( double const& i_scaleFactor )
    {
        m_data[ 0 ] *= i_scaleFactor;
        m_data[ 1 ] *= i_scaleFactor;
    }

    double Vector2::Magnitude() const
    {
        return sqrt( m_data[ 0 ] * m_data[ 0 ] + m_data[ 1 ] * m_data[ 1 ] );
    }

    double Vector2::DotProduct( Vector2 const& i_rhs ) const
    {
        return ( m_data[ 0 ] * i_rhs[ 0 ] + m_data[ 1 ] * i_rhs[ 1 ] );
    }

    bool Vector2::Equals( Vector2 const& i_rhs ) const
    {
        return ( m_data[ 0 ] == i_rhs[ 0 ] && m_data[ 1 ] == i_rhs[ 1 ] );
    }

    Vector2 Add( Vector2 i_lhs, Vector2 const& i_rhs )
    {
        i_lhs.Add( i_rhs );
        return i_lhs;
    }

    Vector2 Subtract( Vector2 i_lhs, Vector2 const& i_rhs )
    {
        i_lhs.Subtract( i_rhs );
        return i_lhs;
    }

    Vector2 Scale( Vector2 i_lhs, double const& i_rhs )
    {
        i_lhs.Scale( i_rhs );
        return i_lhs;
    }

    double DotProduct( Vector2 const& i_lhs, Vector2 const& i_rhs )
    {
        return i_lhs.DotProduct( i_rhs );
    }
}
