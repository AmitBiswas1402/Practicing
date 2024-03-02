import React from 'react'

function Navigation() {
  return (
    <nav className="container flex items-center justify-between">
        <div className="logo cursor-pointer">
            <img src="/images/brand_logo.png" alt="brand" />
        </div>
        <ul className='flex gap-12 font-medium cursor-pointer'>
            <li href="#">Menu</li>
            <li href="#">Location</li>
            <li href="#">About</li>
            <li href="#">Contact</li>
        </ul>
        <button className='bg-red-600 px-7 py-2 rounded-xl text-white font-medium hover:bg-red-500'>Login</button>
    </nav>
  )
}

export default Navigation