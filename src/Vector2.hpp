/*
 * File:   Vector2.hpp
 * Author: JoPe
 *
 * Created on 6 de septiembre de 2013, 15:16
 */

#ifndef VECTOR2_HPP
#define	VECTOR2_HPP

namespace vec
{
    struct Vector2
    {
        double x, y;

        Vector2() = default;
        Vector2( double const& i_x, double const& i_y );
        void Add( Vector2 const& i_rhs );
        void Subtract( Vector2 const& i_rhs );
        void Scale( double const& i_scaleFactor );
        double Magnitude() const;
        double DotProduct( Vector2 const& i_rhs ) const;
        bool Equals( Vector2 const& i_rhs ) const;
    };

    Vector2 Add( Vector2 i_lhs, Vector2 const& i_rhs );
    Vector2 Subtract( Vector2 i_lhs, Vector2 const& i_rhs );
    Vector2 Scale( Vector2 i_lhs, double const& i_rhs );
    double DotProduct( Vector2 const& i_lhs, Vector2 const& i_rhs );
}

#endif	/* VECTOR2_HPP */
